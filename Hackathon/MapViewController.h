//
//  MapViewController.h
//  Hackathon
//
//  Created by Josh Klobe on 4/13/13.
//  Copyright (c) 2013 Josh Klobe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface MapViewController : UIViewController
{
    MKMapView *mapView;
    
}
@property (nonatomic, retain) MKMapView *mapView;
@end
