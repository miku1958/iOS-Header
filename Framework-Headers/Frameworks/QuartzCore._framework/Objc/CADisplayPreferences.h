//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSMutableCopying-Protocol.h>

@class NSString;

@interface CADisplayPreferences : NSObject <NSCopying, NSMutableCopying>
{
    struct CADisplayPreferencesPriv *_priv;
}

@property (readonly, nonatomic) int _preferredHdrType;
@property (nonatomic) BOOL matchContent;
@property (copy, nonatomic) NSString *preferredHdrMode;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMatchContent:(BOOL)arg1 preferredHdrType:(int)arg2;
- (id)initWithPreferences:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

