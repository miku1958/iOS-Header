//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject
{
    WebUserContentURLPatternPrivate *_private;
}

- (void)dealloc;
- (id)host;
- (id)initWithPatternString:(id)arg1;
- (BOOL)isValid;
- (BOOL)matchesSubdomains;
- (BOOL)matchesURL:(id)arg1;
- (id)scheme;

@end
