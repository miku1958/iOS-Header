//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSKit/TSKFormat.h>

#import <TSKit/NSCopying-Protocol.h>

@protocol TSUMultipleChoiceListChoiceProviding;

@interface TSKMultipleChoiceListFormat_DEPRECATED : TSKFormat <NSCopying>
{
    int _initialValue;
    unsigned int _multipleChoiceListFormatID;
    id<TSUMultipleChoiceListChoiceProviding> _popupModel;
}

@property (readonly, nonatomic) int initialValue; // @synthesize initialValue=_initialValue;
@property (readonly, nonatomic) unsigned int multipleChoiceListFormatID; // @synthesize multipleChoiceListFormatID=_multipleChoiceListFormatID;
@property (readonly, nonatomic) id<TSUMultipleChoiceListChoiceProviding> popupModel; // @synthesize popupModel=_popupModel;

- (void).cxx_destruct;
- (id)asMultipleChoiceListFormat;
- (unsigned long long)hash;
- (id)initWithInitialValue:(int)arg1 multipleChoiceListFormatID:(unsigned int)arg2 popupModel:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;

@end

