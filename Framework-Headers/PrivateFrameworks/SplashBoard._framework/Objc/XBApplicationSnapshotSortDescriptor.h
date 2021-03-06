//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSDescriptionProviding-Protocol.h>

@class NSSortDescriptor, NSString;

@interface XBApplicationSnapshotSortDescriptor : NSObject <BSDescriptionProviding>
{
    unsigned long long _key;
    BOOL _ascending;
    CDUnknownBlockType _comparator;
}

@property (readonly, nonatomic) NSSortDescriptor *NSSortDescriptor;
@property (nonatomic) BOOL ascending; // @synthesize ascending=_ascending;
@property (copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long key; // @synthesize key=_key;
@property (readonly) Class superclass;

+ (id)_propertyKeyForSnapshotKey:(unsigned long long)arg1 overriddenForNil:(BOOL *)arg2;
+ (id)sortDescriptorWithKey:(unsigned long long)arg1 ascending:(BOOL)arg2 comparator:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)_stringForKey:(unsigned long long)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithKey:(unsigned long long)arg1 ascending:(BOOL)arg2 comparator:(CDUnknownBlockType)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

