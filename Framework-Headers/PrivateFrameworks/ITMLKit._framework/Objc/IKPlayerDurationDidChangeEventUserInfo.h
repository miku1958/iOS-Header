//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKPlayerEventMarshaling-Protocol.h>

@class NSDictionary, NSString;

@interface IKPlayerDurationDidChangeEventUserInfo : NSObject <IKPlayerEventMarshaling>
{
    double _newDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double newDuration; // @synthesize newDuration=_newDuration;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) Class superclass;

- (id)initWithNewDuration:(double)arg1;

@end

