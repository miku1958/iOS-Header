//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>

@class NSDate, NSString;

@interface PPSource : NSObject <NSCopying>
{
    NSString *_bundleId;
    NSString *_groupId;
    NSString *_documentId;
    NSDate *_date;
}

@property (readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property (readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, nonatomic) NSString *documentId; // @synthesize documentId=_documentId;
@property (readonly, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 date:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSource:(id)arg1;

@end

