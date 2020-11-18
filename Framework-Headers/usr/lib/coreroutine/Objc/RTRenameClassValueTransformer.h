//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

#import <coreroutine/NSKeyedUnarchiverDelegate-Protocol.h>

@class NSString;

@interface RTRenameClassValueTransformer : NSValueTransformer <NSKeyedUnarchiverDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;

@end
