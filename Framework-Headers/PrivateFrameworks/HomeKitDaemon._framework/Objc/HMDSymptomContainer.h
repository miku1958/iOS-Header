//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;
@protocol HMDAccessorySymptomsDelegate;

@interface HMDSymptomContainer : NSObject
{
    NSString *_idsIdentifier;
    id<HMDAccessorySymptomsDelegate> _delegate;
    NSSet *_broadcastedSymptoms;
    NSSet *_localSymptoms;
}

@property (copy, nonatomic) NSSet *broadcastedSymptoms; // @synthesize broadcastedSymptoms=_broadcastedSymptoms;
@property (weak, nonatomic) id<HMDAccessorySymptomsDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property (copy, nonatomic) NSSet *localSymptoms; // @synthesize localSymptoms=_localSymptoms;

- (void).cxx_destruct;
- (id)initWithIDSIdentifier:(id)arg1;

@end

