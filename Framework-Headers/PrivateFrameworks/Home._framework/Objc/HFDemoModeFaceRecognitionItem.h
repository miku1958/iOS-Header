//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFPersonLikeItem-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class HFDemoModeFaceRecognitionRecentsData, HMHome, HMPerson, HMPersonManager, NSString;

@interface HFDemoModeFaceRecognitionItem : HFItem <HFPersonLikeItem, NSCopying>
{
    HMHome *_home;
    HFDemoModeFaceRecognitionRecentsData *_demoRecentsEntry;
}

@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) HFDemoModeFaceRecognitionRecentsData *demoRecentsEntry; // @synthesize demoRecentsEntry=_demoRecentsEntry;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (readonly, copy, nonatomic) HMPerson *person;
@property (readonly, nonatomic) HMPersonManager *personManager;
@property (readonly) Class superclass;

+ (id)dateFormatter;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithRecentsData:(id)arg1 home:(id)arg2;

@end

