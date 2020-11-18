//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDFKit/NSCopying-Protocol.h>

@class PDFDestinationPrivate, PDFPage;

@interface PDFDestination : NSObject <NSCopying>
{
    PDFDestinationPrivate *_private;
}

@property (readonly, weak, nonatomic) PDFPage *page;
@property (readonly, nonatomic) struct CGPoint point;
@property (nonatomic) double zoom;

- (void).cxx_destruct;
- (void)commonInit;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const struct __CFArray *)createArrayRef;
- (id)description;
- (id)document;
- (id)init;
- (id)initWithDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2;
- (id)initWithPage:(id)arg1 atPoint:(struct CGPoint)arg2;
- (int)type;

@end

