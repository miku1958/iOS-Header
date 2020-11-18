//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/NAIdentifiable-Protocol.h>

@class MTAlarm, NSString;
@protocol HFMediaProfileContainer;

@interface HFHomePodAlarmItem : HFItem <NAIdentifiable>
{
    id<HFMediaProfileContainer> _mediaProfileContainer;
    MTAlarm *_alarm;
    NSString *_alarmIdentifier;
}

@property (copy, nonatomic) MTAlarm *alarm; // @synthesize alarm=_alarm;
@property (copy, nonatomic) NSString *alarmIdentifier; // @synthesize alarmIdentifier=_alarmIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
@property (readonly) Class superclass;

+ (id)na_identity;
- (void).cxx_destruct;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 alarm:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

