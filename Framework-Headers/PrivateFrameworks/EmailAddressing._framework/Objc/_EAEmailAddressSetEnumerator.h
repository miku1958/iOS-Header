//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class EAEmailAddressSet;

@interface _EAEmailAddressSetEnumerator : NSEnumerator
{
    EAEmailAddressSet *_set;
    CDStruct_58648341 _state;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithSet:(id)arg1;
- (id)nextObject;

@end
