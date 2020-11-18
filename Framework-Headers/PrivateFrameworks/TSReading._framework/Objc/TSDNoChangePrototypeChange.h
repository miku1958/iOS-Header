//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDPrototypeChange-Protocol.h>

@class NSString;
@protocol TSSPropertySource;

@interface TSDNoChangePrototypeChange : NSObject <TSDPrototypeChange>
{
    id mPrototype;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong) id<TSSPropertySource> propertiesAfterChange;
@property (readonly, strong) id<TSSPropertySource> propertiesBeforeChange;
@property (readonly, strong) id prototype; // @synthesize prototype=mPrototype;
@property (readonly) BOOL prototypeIsBeingDeleted;
@property (readonly) BOOL prototypeIsBeingModified;
@property (readonly) BOOL prototypeIsBeingReplaced;
@property (readonly, strong) id replacement;
@property (readonly) Class superclass;

- (id)changedPropertySet;
- (void)dealloc;
- (id)initNoChangePrototypeChangeForPrototype:(id)arg1;
- (BOOL)propertiesAreChanging:(id)arg1;
- (BOOL)propertyIsChanging:(int)arg1;

@end

