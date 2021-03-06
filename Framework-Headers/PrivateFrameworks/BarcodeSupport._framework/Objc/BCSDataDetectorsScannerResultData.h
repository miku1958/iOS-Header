//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BarcodeSupport/BCSParsedDataPrivate-Protocol.h>

@class DDScannerResult, NSString;

__attribute__((visibility("hidden")))
@interface BCSDataDetectorsScannerResultData : NSObject <BCSParsedDataPrivate>
{
    long long _type;
    NSString *_extraPreviewText;
    DDScannerResult *_scannerResult;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *extraPreviewText; // @synthesize extraPreviewText=_extraPreviewText;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) DDScannerResult *scannerResult; // @synthesize scannerResult=_scannerResult;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScannerResult:(id)arg1 type:(long long)arg2 extraPreviewText:(id)arg3;

@end

