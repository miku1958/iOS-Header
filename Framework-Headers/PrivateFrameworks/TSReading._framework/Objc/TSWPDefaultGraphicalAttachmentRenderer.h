//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/TSWPGraphicalAttachmentRenderer-Protocol.h>

@class NSString;

@interface TSWPDefaultGraphicalAttachmentRenderer : NSObject <TSWPGraphicalAttachmentRenderer>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)drawAttachment:(id)arg1 inContext:(struct CGContext *)arg2 selection:(id)arg3;

@end
