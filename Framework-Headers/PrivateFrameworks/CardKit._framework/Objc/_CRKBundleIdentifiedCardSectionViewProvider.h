//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CardKit/CRKIdentifiedCardSectionViewProviding-Protocol.h>

@class NSArray, NSString;
@protocol CRCard, CRKCardSectionViewProviding;

@interface _CRKBundleIdentifiedCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding>
{
    NSString *providerIdentifier;
    id<CRCard> card;
    NSArray *viewConfigurations;
    id<CRKCardSectionViewProviding> _realCardSectionViewProvider;
}

@property (readonly, nonatomic) id<CRCard> card; // @synthesize card;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier;
@property (strong, nonatomic) id<CRKCardSectionViewProviding> realCardSectionViewProvider; // @synthesize realCardSectionViewProvider=_realCardSectionViewProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *viewConfigurations; // @synthesize viewConfigurations;

- (void).cxx_destruct;
- (unsigned long long)displayPriorityForCardSection:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)vetoDisplayOfCardSection:(id)arg1;

@end

