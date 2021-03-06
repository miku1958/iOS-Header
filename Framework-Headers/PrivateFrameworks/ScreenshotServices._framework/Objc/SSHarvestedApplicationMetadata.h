//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/BSXPCCoding-Protocol.h>
#import <ScreenshotServices/SSLoggable-Protocol.h>

@class NSArray, NSString;

@interface SSHarvestedApplicationMetadata : NSObject <BSXPCCoding, SSLoggable>
{
    BOOL _canGenerateDocument;
    NSString *_userActivityTitle;
    NSArray *_contentRects;
}

@property (nonatomic) BOOL canGenerateDocument; // @synthesize canGenerateDocument=_canGenerateDocument;
@property (copy, nonatomic) NSArray *contentRects; // @synthesize contentRects=_contentRects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *loggableDescription;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *userActivityTitle; // @synthesize userActivityTitle=_userActivityTitle;

- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end

