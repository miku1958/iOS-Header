//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TransparencyDetailsView/SBSHardwareButtonEventConsuming-Protocol.h>

@class NSString;
@protocol BSInvalidatable;

@interface TDVHomeButtonHandler : NSObject <SBSHardwareButtonEventConsuming>
{
    CDUnknownBlockType _homeButtonHandlerCallback;
    id<BSInvalidatable> _homeButtonAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<BSInvalidatable> homeButtonAssertion; // @synthesize homeButtonAssertion=_homeButtonAssertion;
@property (copy, nonatomic) CDUnknownBlockType homeButtonHandlerCallback; // @synthesize homeButtonHandlerCallback=_homeButtonHandlerCallback;
@property (readonly) Class superclass;

+ (id)handlerWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (void)startConsumingHardwarePresses:(CDUnknownBlockType)arg1;
- (void)stopConsumingHardwarePresses;

@end

