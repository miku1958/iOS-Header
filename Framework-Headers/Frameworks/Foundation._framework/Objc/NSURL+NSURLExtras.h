//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (NSURLExtras)
+ (id)_web_URLWithComponents:(CDStruct_4f05a0fa)arg1;
+ (id)_web_URLWithString:(id)arg1 relativeToURL:(id)arg2;
- (CDStruct_4f05a0fa)_web_URLComponents;
- (BOOL)_web_isJavaScriptURL;
- (id)_web_scriptIfJavaScriptURL;
- (id)_web_suggestedFilenameWithMIMEType:(id)arg1;
@end
