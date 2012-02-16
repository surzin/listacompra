//
//  Tienda.h
//  Comprame
//
//  Created by Antonio Gil Sánchez on 09/02/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Tienda : NSManagedObject

@property (nonatomic, retain) NSNumber * id_tien;
@property (nonatomic, retain) NSString * nombre_tien;
@property (nonatomic, retain) NSString * direccion_tien;
@property (nonatomic, retain) NSNumber * coordenada_x;
@property (nonatomic, retain) NSNumber * coordenada_y;
@property (nonatomic, retain) NSString * logo_tien;
@property (nonatomic, retain) NSNumber * order_tien;

@end
