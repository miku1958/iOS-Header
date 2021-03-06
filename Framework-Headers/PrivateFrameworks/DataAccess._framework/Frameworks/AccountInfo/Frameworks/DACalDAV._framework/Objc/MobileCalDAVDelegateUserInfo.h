//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MobileCalDAVDelegateUserInfo : NSObject
{
    BOOL _allowWrite;
    NSString *_principalPath;
    NSString *_displayName;
    NSString *_uid;
}

@property (nonatomic) BOOL allowWrite; // @synthesize allowWrite=_allowWrite;
@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (strong, nonatomic) NSString *principalPath; // @synthesize principalPath=_principalPath;
@property (strong, nonatomic) NSString *uid; // @synthesize uid=_uid;

+ (id)infoFromCalDAVDetails:(id)arg1 allowWrite:(BOOL)arg2;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPrincipalPath:(id)arg1 displayName:(id)arg2 allowWrite:(BOOL)arg3;

@end

