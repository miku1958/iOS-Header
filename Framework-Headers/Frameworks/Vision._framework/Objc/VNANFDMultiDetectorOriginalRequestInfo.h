//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNANFDMultiDetectorOriginalRequestInfo : NSObject
{
    NSString *_requestRevisionKey;
    unsigned long long _originalRequestResultsIndex;
}

@property (readonly) unsigned long long originalRequestResultsIndex; // @synthesize originalRequestResultsIndex=_originalRequestResultsIndex;
@property (readonly) NSString *requestRevisionKey; // @synthesize requestRevisionKey=_requestRevisionKey;

+ (id)requestClassToMultiDetectorClassPerRequestRevision;
- (void).cxx_destruct;
- (id)initWithProcessingOptionRequestRevisionKey:(id)arg1 originalRequestResultsIndex:(unsigned long long)arg2;

@end
