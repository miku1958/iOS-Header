//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVLeafItem.h>

@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem
{
    NSURL *_baseURL;
    int _writeStyle;
}

@property (strong, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property (nonatomic) int writeStyle; // @synthesize writeStyle=_writeStyle;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithURL:(id)arg1;
- (void)parserSuggestsBaseURL:(id)arg1;
- (id)payloadAsFullURL;
- (id)payloadAsOriginalURL;
- (void)write:(id)arg1;

@end

