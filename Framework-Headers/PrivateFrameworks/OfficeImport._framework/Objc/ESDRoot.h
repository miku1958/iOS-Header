//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/ESDObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ESDRoot : ESDObject
{
    NSMutableArray *mChildren;
}

- (void).cxx_destruct;
- (void)addChild:(id)arg1;
- (id)childAt:(unsigned long long)arg1;
- (unsigned long long)childCount;
- (struct EshRoot *)eshRoot;
- (id)init;
- (id)initFromReader:(struct OcReader *)arg1;
- (id)initWithEshObject:(struct EshObject *)arg1;
- (id)initWithPbState:(id)arg1;
- (id)pbReferenceWithID:(unsigned int)arg1;
- (void)writeToWriter:(struct OcWriter *)arg1;

@end

