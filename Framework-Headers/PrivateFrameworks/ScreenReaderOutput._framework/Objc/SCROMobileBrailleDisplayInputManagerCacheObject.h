//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SCROMobileBrailleDisplayInputManagerCacheObject : NSObject
{
    NSString *_driverIdentifier;
    NSString *_modelIdentifier;
    int _brailleInputMode;
    NSMutableDictionary *_commandDictionary;
    NSMutableArray *_orderedIdentifiers;
    NSBundle *_bundle;
}

@property (nonatomic) int brailleInputMode; // @synthesize brailleInputMode=_brailleInputMode;
@property (strong, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property (strong, nonatomic) NSMutableDictionary *commandDictionary; // @synthesize commandDictionary=_commandDictionary;
@property (strong, nonatomic) NSString *driverIdentifier; // @synthesize driverIdentifier=_driverIdentifier;
@property (strong, nonatomic) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property (strong, nonatomic) NSMutableArray *orderedIdentifiers; // @synthesize orderedIdentifiers=_orderedIdentifiers;

- (void).cxx_destruct;

@end

