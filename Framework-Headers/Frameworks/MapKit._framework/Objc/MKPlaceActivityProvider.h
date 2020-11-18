//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapItem;
@protocol MKPlaceActivityProviderDelegate;

@interface MKPlaceActivityProvider : NSObject
{
    id<MKPlaceActivityProviderDelegate> _delegate;
    MKMapItem *_mapItem;
}

@property (weak, nonatomic) id<MKPlaceActivityProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;

- (void).cxx_destruct;
- (id)activityAnnotationView;
- (id)activityTitle;
- (id)activityURL;
- (id)initWithMapItem:(id)arg1;
- (BOOL)shouldUseWebPlaceCardForActivityType:(id)arg1;
- (id)webPlaceCardURL;

@end

