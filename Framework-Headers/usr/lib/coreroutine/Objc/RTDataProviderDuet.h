//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTDataProvider.h>

#import <coreroutine/RTDataProviderProtocol-Protocol.h>

@class NSString, RTDuetHelper;

__attribute__((visibility("hidden")))
@interface RTDataProviderDuet : RTDataProvider <RTDataProviderProtocol>
{
    RTDuetHelper *_duetHelper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) RTDuetHelper *duetHelper; // @synthesize duetHelper=_duetHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (void)shutdown;

@end

