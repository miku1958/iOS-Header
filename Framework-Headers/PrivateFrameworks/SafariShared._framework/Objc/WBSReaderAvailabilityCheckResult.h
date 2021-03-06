//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>
#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSArray;

@interface WBSReaderAvailabilityCheckResult : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _readerAvailable;
    BOOL _isSameDocumentNavigation;
    NSArray *_textSamples;
}

@property (nonatomic) BOOL isSameDocumentNavigation; // @synthesize isSameDocumentNavigation=_isSameDocumentNavigation;
@property (nonatomic, getter=isReaderAvailable) BOOL readerAvailable; // @synthesize readerAvailable=_readerAvailable;
@property (copy, nonatomic) NSArray *textSamples; // @synthesize textSamples=_textSamples;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

