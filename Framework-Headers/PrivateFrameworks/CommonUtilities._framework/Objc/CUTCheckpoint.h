//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommonUtilities/NSCopying-Protocol.h>
#import <CommonUtilities/NSSecureCoding-Protocol.h>

@class NSString;

@interface CUTCheckpoint : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _frozen;
    BOOL _assertsUseAfterFreeze;
    BOOL _shouldLogTouches;
    NSString *_name;
    NSString *_uniqueIdentifier;
}

@property (nonatomic) BOOL assertsUseAfterFreeze; // @synthesize assertsUseAfterFreeze=_assertsUseAfterFreeze;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) BOOL shouldLogTouches; // @synthesize shouldLogTouches=_shouldLogTouches;
@property (readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

+ (id)_reportDateFormatter;
+ (id)_whitelistedClasses;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_appendReportToMutableString:(id)arg1 indentation:(long long)arg2 paddedNameLength:(long long)arg3;
- (BOOL)_assertNotFrozen;
- (void)_freeze;
- (id)_freezeBacktrace;
- (id)_reportEndDate;
- (id)_reportMetadata;
- (id)_reportName;
- (id)_reportStartDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)freeze;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFrozen;
- (id)report;

@end

