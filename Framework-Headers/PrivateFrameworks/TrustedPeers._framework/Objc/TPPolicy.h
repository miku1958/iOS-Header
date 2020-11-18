//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrustedPeers/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSSet, TPPolicyVersion;

@interface TPPolicy : NSObject <NSSecureCoding>
{
    BOOL _unknownRedactions;
    TPPolicyVersion *_version;
    NSArray *_modelToCategory;
    NSDictionary *_categoriesByView;
    NSDictionary *_introducersByCategory;
    NSArray *_keyViewMapping;
    NSSet *_userControllableViewList;
    NSSet *_piggybackViews;
}

@property (strong, nonatomic) NSDictionary *categoriesByView; // @synthesize categoriesByView=_categoriesByView;
@property (strong, nonatomic) NSDictionary *introducersByCategory; // @synthesize introducersByCategory=_introducersByCategory;
@property (strong, nonatomic) NSArray *keyViewMapping; // @synthesize keyViewMapping=_keyViewMapping;
@property (strong, nonatomic) NSArray *modelToCategory; // @synthesize modelToCategory=_modelToCategory;
@property (strong, nonatomic) NSSet *piggybackViews; // @synthesize piggybackViews=_piggybackViews;
@property BOOL unknownRedactions; // @synthesize unknownRedactions=_unknownRedactions;
@property (strong, nonatomic) NSSet *userControllableViewList; // @synthesize userControllableViewList=_userControllableViewList;
@property (strong, nonatomic) TPPolicyVersion *version; // @synthesize version=_version;

+ (id)policyWithModelToCategory:(id)arg1 categoriesByView:(id)arg2 introducersByCategory:(id)arg3 keyViewMapping:(id)arg4 unknownRedactions:(BOOL)arg5 userControllableViewList:(id)arg6 piggybackViews:(id)arg7 version:(id)arg8;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)categoryForModel:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPolicy:(id)arg1;
- (BOOL)peerInCategory:(id)arg1 canAccessView:(id)arg2;
- (id)syncingPolicyForModel:(id)arg1 syncUserControllableViews:(int)arg2 error:(id *)arg3;
- (BOOL)trustedPeerInCategory:(id)arg1 canIntroduceCategory:(id)arg2;
- (id)viewsForModel:(id)arg1 error:(id *)arg2;

@end
