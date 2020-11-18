//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDFKit/NSCopying-Protocol.h>

@class NSString, PDFActionPrivate;

@interface PDFAction : NSObject <NSCopying>
{
    PDFActionPrivate *_private;
}

@property (readonly, nonatomic) NSString *type;

+ (id)actionWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;
+ (Class)classForActionDictionary:(struct CGPDFDictionary *)arg1;
- (void).cxx_destruct;
- (id)baseURLForDocument:(id)arg1;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct __CFDictionary *)createDictionaryRef;
- (id)description;
- (id)init;
- (id)initWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (id)nextActions;
- (void)setNextAction:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (void)setNextActions:(id)arg1;
- (void)setNextActions:(struct CGPDFArray *)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (void)setType:(id)arg1;
- (id)toolTip;
- (id)toolTipNoLabel;

@end

