//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCalendar/ICSAppendable-Protocol.h>

@class NSMutableString, NSString;

@interface ICSStringWriter : NSObject <ICSAppendable>
{
    NSMutableString *_result;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)mutableResult;
- (id)result;

@end

