//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebUI/NSCopying-Protocol.h>
#import <WebUI/NSSecureCoding-Protocol.h>
#import <WebUI/WBUFormAutoFillFrameHandle-Protocol.h>

@class NSArray, NSString, NSURL, _WKFrameHandle;

@interface WBUFormAutoFillFrameHandle : NSObject <NSCopying, NSSecureCoding, WBUFormAutoFillFrameHandle>
{
    NSURL *_URL;
    NSArray *_certificateChain;
    _WKFrameHandle *_frameHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _WKFrameHandle *frameHandle; // @synthesize frameHandle=_frameHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *webui_URL;
@property (readonly, nonatomic) NSArray *webui_certificateChain;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrameHandle:(id)arg1 URL:(id)arg2 certificateChain:(id)arg3;
- (id)initWithWebProcessPlugInFrame:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

