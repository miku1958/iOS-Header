//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HMDHelperExternalProtocol;

@interface HMDHelper : NSObject
{
    id<HMDHelperExternalProtocol> _externalProtocol;
}

@property (strong, nonatomic) id<HMDHelperExternalProtocol> externalProtocol; // @synthesize externalProtocol=_externalProtocol;

+ (void)setSharedHelper:(id)arg1;
+ (id)sharedHelper;
- (void).cxx_destruct;
- (id)hashedRouteIDForIdentifier:(id)arg1;
- (id)initWithExternalProtocol:(id)arg1;

@end
