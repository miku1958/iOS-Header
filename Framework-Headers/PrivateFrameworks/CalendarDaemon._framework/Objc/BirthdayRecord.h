//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BirthdayRecord : NSObject
{
    NSMutableDictionary *_record;
    BOOL _isEmpty;
}

@property (readonly, nonatomic) BOOL isEmpty; // @synthesize isEmpty=_isEmpty;

- (void).cxx_destruct;
- (BOOL)doesPerson:(void *)arg1 haveBirthday:(id)arg2;
- (id)init;
- (void)recordBirthday:(id)arg1 forPerson:(void *)arg2;

@end

