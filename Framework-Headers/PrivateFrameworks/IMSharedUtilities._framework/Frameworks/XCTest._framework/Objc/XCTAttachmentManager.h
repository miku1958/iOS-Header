//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, XCTestCase;

@interface XCTAttachmentManager : NSObject
{
    BOOL _isValid;
    NSMutableArray *_attachments;
    XCTestCase *_testCase;
}

@property (readonly) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property BOOL isValid; // @synthesize isValid=_isValid;
@property (readonly) XCTestCase *testCase; // @synthesize testCase=_testCase;

+ (void)_synthesizeActivityForAttachment:(id)arg1 testCase:(id)arg2;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)dealloc;
- (void)dequeueAndReportBackgroundAttachments;
- (void)enqueueAttachment:(id)arg1;
- (void)ensureNoRemainingAttachments;
- (id)initWithTestCase:(id)arg1;

@end
