//
//  Precio.h
//  Comprame
//
//  Created by Antonio Gil Sánchez on 09/02/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Precio : NSManagedObject

@property (nonatomic, retain) NSNumber * id_cate;
@property (nonatomic, retain) NSNumber * id_prod;
@property (nonatomic, retain) NSNumber * id_tien;
@property (nonatomic, retain) NSNumber * fecha_prec;
@property (nonatomic, retain) NSDecimalNumber * precio_prec;
@property (nonatomic, retain) NSNumber * id_mone;
@property (nonatomic, retain) NSNumber * cantidad_prec;
@property (nonatomic, retain) NSNumber * id_unid;

@end
