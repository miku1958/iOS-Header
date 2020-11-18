//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIDiffableDataSourceUpdate-Protocol.h>

@class NSOrderedSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIDiffableDataSourceUpdate : NSObject <_UIDiffableDataSourceUpdate>
{
    BOOL _isSectionOperation;
    BOOL _destinationIdentifierIsSectionIdentifier;
    NSOrderedSet *_identifiers;
    long long _action;
    long long _relativePosition;
    id _destinationIdentifier;
}

@property (readonly, nonatomic) long long action; // @synthesize action=_action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id destinationIdentifier; // @synthesize destinationIdentifier=_destinationIdentifier;
@property (readonly, nonatomic) BOOL destinationIdentifierIsSectionIdentifier; // @synthesize destinationIdentifierIsSectionIdentifier=_destinationIdentifierIsSectionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSOrderedSet *identifiers; // @synthesize identifiers=_identifiers;
@property (readonly, nonatomic) BOOL isSectionOperation; // @synthesize isSectionOperation=_isSectionOperation;
@property (readonly, nonatomic) long long relativePosition; // @synthesize relativePosition=_relativePosition;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_throwIfInvalid;
- (id)initWithIdentifiers:(id)arg1 sectionIdentifiers:(id)arg2 action:(long long)arg3 desinationIdentifier:(id)arg4 relativePosition:(long long)arg5 destinationIsSection:(BOOL)arg6;
- (id)initWithItemIdentifiers:(id)arg1 action:(long long)arg2;
- (id)initWithItemIdentifiers:(id)arg1 action:(long long)arg2 destinationIdentifier:(id)arg3 relativePosition:(long long)arg4;
- (id)initWithItemIdentifiers:(id)arg1 appendingToDestinationSectionIdentifier:(id)arg2;
- (id)initWithSectionIdentifiers:(id)arg1 action:(long long)arg2;
- (id)initWithSectionIdentifiers:(id)arg1 action:(long long)arg2 destinationIdentifier:(id)arg3 relativePosition:(long long)arg4;
- (id)initWithSectionIdentifiers:(id)arg1 appendingToDestinationSectionIdentifier:(id)arg2;

@end

