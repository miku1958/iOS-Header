//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppAttestInternal/CBORValue.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CBORArray : CBORValue
{
    NSMutableArray *m_data;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (int)fieldType;
- (id)init;
- (id)initWith:(id)arg1;
- (void)write:(id)arg1;

@end

