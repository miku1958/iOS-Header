//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InAppMessages/IAMEventProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface IAMEvent : NSObject <IAMEventProtocol>
{
    NSString *_name;
    long long _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, copy, nonatomic) NSDictionary *payload;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly) Class superclass;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (readonly, copy, nonatomic) id value;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 type:(long long)arg2;
- (BOOL)matchesWithKey:(id)arg1;

@end

