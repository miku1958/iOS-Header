//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/BSAction.h>

@class NSString;

@interface SBSLockScreenContentAction : BSAction
{
    unsigned long long _type;
    NSString *_slot;
    unsigned long long _secureAppType;
}

@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long secureAppType; // @synthesize secureAppType=_secureAppType;
@property (strong, nonatomic) NSString *slot; // @synthesize slot=_slot;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 handler:(CDUnknownBlockType)arg4;

@end

