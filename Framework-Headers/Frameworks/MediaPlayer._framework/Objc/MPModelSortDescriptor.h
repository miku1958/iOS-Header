//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSSortDescriptor.h>

@class NSArray;

@interface MPModelSortDescriptor : NSSortDescriptor
{
    NSArray *_keyPath;
}

@property (copy, nonatomic) NSArray *keyPath; // @synthesize keyPath=_keyPath;

+ (id)sortDescriptorWithKeyPath:(id)arg1 ascending:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

