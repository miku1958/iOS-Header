//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class SFAirDropActivityViewController;

__attribute__((visibility("hidden")))
@interface _UIAirDropActivity : UIActivity
{
    SFAirDropActivityViewController *_airDropViewController;
    CDUnknownBlockType _airdropCompletion;
    long long _maxPreviews;
}

@property (strong, nonatomic) SFAirDropActivityViewController *airDropViewController; // @synthesize airDropViewController=_airDropViewController;
@property (copy, nonatomic) CDUnknownBlockType airdropCompletion; // @synthesize airdropCompletion=_airdropCompletion;
@property (nonatomic) long long maxPreviews; // @synthesize maxPreviews=_maxPreviews;

- (void).cxx_destruct;
- (struct CGSize)_thumbnailSize;
- (id)activityType;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;

@end
