//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import <ActionKit/WFContentItemClass-Protocol.h>

@class NSString, WFMachineReadableCode;

@interface WFMachineReadableCodeContentItem : WFGenericFileContentItem <WFContentItemClass>
{
    BOOL _prefersImage;
    NSString *_errorCorrectionLevel;
}

@property (readonly, nonatomic) WFMachineReadableCode *codeObject;
@property (strong, nonatomic) NSString *errorCorrectionLevel; // @synthesize errorCorrectionLevel=_errorCorrectionLevel;
@property (nonatomic) BOOL prefersImage; // @synthesize prefersImage=_prefersImage;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)qrCodeItemWithString:(id)arg1 errorCorrectionLevel:(id)arg2;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;
- (void).cxx_destruct;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (id)generateImageOfSize:(struct CGSize)arg1 withErrorCorrectionLevel:(id)arg2 error:(id *)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)preferredFileType;
- (id)preferredObjectType;

@end

