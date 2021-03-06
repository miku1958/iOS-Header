//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface EDProtection : NSObject <NSCopying>
{
    BOOL mHidden;
    BOOL mLocked;
}

+ (id)protectionWithHidden:(BOOL)arg1 locked:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithHidden:(BOOL)arg1 locked:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToProtection:(id)arg1;
- (BOOL)isHidden;
- (BOOL)isLocked;

@end

