//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSString, TUHandle;

@interface TULabeledHandle : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isSuggested;
    TUHandle *_handle;
    NSString *_label;
}

@property (readonly, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
@property (readonly, nonatomic) BOOL isSuggested; // @synthesize isSuggested=_isSuggested;
@property (readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1 label:(id)arg2 isSuggested:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLabeledHandle:(id)arg1;

@end

