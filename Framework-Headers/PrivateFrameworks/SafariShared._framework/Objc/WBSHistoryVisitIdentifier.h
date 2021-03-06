//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>
#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSString, WBSHistoryItem, WBSHistoryVisit;

@interface WBSHistoryVisitIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _hash;
    NSString *_urlString;
    double _visitTime;
    WBSHistoryItem *_associatedHistoryItem;
    WBSHistoryVisit *_associatedHistoryVisit;
}

@property (strong, nonatomic) WBSHistoryItem *associatedHistoryItem; // @synthesize associatedHistoryItem=_associatedHistoryItem;
@property (strong, nonatomic) WBSHistoryVisit *associatedHistoryVisit; // @synthesize associatedHistoryVisit=_associatedHistoryVisit;
@property (readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property (readonly, nonatomic) double visitTime; // @synthesize visitTime=_visitTime;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithURLString:(id)arg1 visitTime:(double)arg2;
- (BOOL)isEqual:(id)arg1;

@end

