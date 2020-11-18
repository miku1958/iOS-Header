//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreDAV/CoreDAVResponseBodyParser-Protocol.h>

@class NSError, NSString;

@interface CoreDAVNullParser : NSObject <CoreDAVResponseBodyParser>
{
    NSError *_parserError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSError *parserError;
@property (readonly) Class superclass;

+ (BOOL)canHandleContentType:(id)arg1;
- (void)dealloc;
- (BOOL)processData:(id)arg1 forTask:(id)arg2;

@end

