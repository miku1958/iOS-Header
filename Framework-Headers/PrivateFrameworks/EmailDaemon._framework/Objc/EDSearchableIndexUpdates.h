//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFPubliclyDescribable-Protocol.h>

@class NSArray, NSString;

@interface EDSearchableIndexUpdates : NSObject <EFPubliclyDescribable>
{
    NSArray *_itemsRequiringIndexing;
    NSArray *_removedIdentifiers;
    NSArray *_removedDomainIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, nonatomic) BOOL hasUpdates;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *itemsRequiringIndexing; // @synthesize itemsRequiringIndexing=_itemsRequiringIndexing;
@property (copy, nonatomic) NSArray *removedDomainIdentifiers; // @synthesize removedDomainIdentifiers=_removedDomainIdentifiers;
@property (copy, nonatomic) NSArray *removedIdentifiers; // @synthesize removedIdentifiers=_removedIdentifiers;
@property (readonly) Class superclass;

+ (id)updates;
- (void).cxx_destruct;

@end

