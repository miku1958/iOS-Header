//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPDataDetectorProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPURLDataDetector : NSObject <TSWPDataDetectorProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct _NSRange)calculateScanRangeForString:(id)arg1 changedRange:(struct _NSRange)arg2;
+ (id)detectorIdentifier;
+ (struct _NSRange)expandValidRange:(struct _NSRange)arg1 inString:(id)arg2;
+ (id)newArrayByScanningString:(id)arg1 scanRange:(struct _NSRange)arg2;
+ (id)newURLFromString:(id)arg1;
+ (id)scanString:(id)arg1 scanRange:(struct _NSRange)arg2;
+ (void)setInvalidURLSchemes:(id)arg1;

@end

