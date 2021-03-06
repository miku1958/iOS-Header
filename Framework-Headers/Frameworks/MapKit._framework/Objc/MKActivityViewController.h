//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

#import <MapKit/UIActivityViewControllerAirDropDelegate-Protocol.h>

@class NSString;
@protocol MKActivityViewControllerDelegate;

@interface MKActivityViewController : UIActivityViewController <UIActivityViewControllerAirDropDelegate>
{
    id<MKActivityViewControllerDelegate> _activityControllerDelegate;
}

@property (weak, nonatomic) id<MKActivityViewControllerDelegate> activityControllerDelegate; // @synthesize activityControllerDelegate=_activityControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (CDUnknownBlockType)_activityHandler;
- (CDUnknownBlockType)_completionHandler;
- (id)initWithActivityItems:(id)arg1;
- (id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3;
- (id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3 activityProviderDelegate:(id)arg4;
- (id)initWithShareItem:(id)arg1;
- (id)initWithSource:(id)arg1 destination:(id)arg2 composedRoute:(id)arg3 applicationActivities:(id)arg4 routeProviderDelegate:(id)arg5;

@end

