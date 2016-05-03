//
//  NAMapViewDelegate.h
//  NAMapKit
//
//  Created by Daniel Doubrovkine on 3/10/14.
//  Copyright (c) 2010-14 neilang.com. All rights reserved.
//

@class NAMapView;
@class NAAnnotation;

@class NAPinAnnotationCallOutView;

/**
 *  An NAMapView delegate.
 */
@protocol NAMapViewDelegate
@optional
/**
 *  An annotation has been tapped.
 *
 *  @param mapView    Map view on which the annotation has been tapped.
 *  @param annotation The annotation that has been tapped.
 */
- (void)mapView:(NAMapView *)mapView tappedOnAnnotation:(NAAnnotation *)annotation;

/**
 *  Zoom level has changed.
 *
 *  @param mapView The map view on which the zoom level has changed.
 *  @param level   The new zoom level.
 */
- (void)mapView:(NAMapView *)mapView hasChangedZoomLevel:(CGFloat)level;

//add by sing, 2016-04-24
- (void)mapView:(NAMapView*)mapView didTapOnMapView:(CGPoint)point;
- (void)mapView:(NAMapView*)mapView didLongPressTapOnMapView:(CGPoint)point;
- (void)mapView:(NAMapView*)mapView didShowCalloutView:(NAPinAnnotationCallOutView*)callout;

@end
