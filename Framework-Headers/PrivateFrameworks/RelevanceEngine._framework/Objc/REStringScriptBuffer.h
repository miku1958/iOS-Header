//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REScriptBuffer-Protocol.h>

@class NSString;

@interface REStringScriptBuffer : NSObject <REScriptBuffer>
{
    NSString *_string;
    unsigned long long _index;
}

@property (readonly, nonatomic) unsigned short current;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentForLine:(unsigned long long)arg1;
- (id)initWithString:(id)arg1;
- (void)next;

@end

